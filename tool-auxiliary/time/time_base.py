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