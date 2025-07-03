from datetime import datetime

class TimeBase:
    """
    The objective of this class is to contain the blueprint for time translation.

    Methods within this class should be overridden and used to translate time from a target language into a python datetime object.
    """

    # To be overridden
    def evaluate_time_str(self, time_str) -> datetime:
        """
        For evaluating a string into a datetime object
        """
        return datetime.now()
    
    # To be overridden
    def evaluate_time_tree(self, time_tree) -> datetime:
        """
        For evaluating a tree into a datetime object
        """
        return datetime.now()

    # To be overridden
    def return_time_str(self, time_datetime) -> str:
        """
        For converting a datetime object back into a string of the target language
        """
        month = time_datetime.month
        day = time_datetime.day
        year = time_datetime.year
        return f"{day}-{month}-{year}"

    def time_analyser(self, time_tree):
        """
        Used specifically in the evaluation of time components

        Identifies the different time ranges (Between, After)
        """

        times = []

        times_choices = {"time_before": "b", "time_after": "a", "time_on": "o"}

        times_connector = {"time_and": "and", "time_or": "or",}

        s = [time_tree]

        while s:
            node = s.pop()

            if node.type in times_choices:
                times.append(times_choices[node.type])
            elif node.type in times_connector:
                times.append(times_connector[node.type])
            elif node.type == "time":
                times.append(self.evaluate_time_tree(node))

            if node.child_count > 0:
                for child in node.children:
                    s.append(child)

        return tuple(times)


class TimeOverride(TimeBase):
    def __init__(self):
        pass