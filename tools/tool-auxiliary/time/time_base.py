from datetime import datetime

class TimeBase:
    def evaluate_time_str(self, time_str) -> datetime:
        return datetime.now()
    
    def evaluate_time_tree(self, time_tree) -> datetime:
        return datetime.now()

    def return_time_str(self, time_datetime) -> str:
        month = time_datetime.month
        day = time_datetime.day
        year = time_datetime.year
        return f"{day}-{month}-{year}"

    def time_analyser(self, time_tree):

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