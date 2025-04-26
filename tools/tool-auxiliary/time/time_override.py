from datetime import datetime

# This isn't right but it should be added somehow
from time_base import TimeBase

class TimeOverride(TimeBase):
    def __init__(self):
        return

    # 
    # ====================================
    # Evaluating Time from a String
    # ====================================
    # 
    def evaluate_time_str(self, time_str) -> datetime:
        time = time_str.split("-")
        date_formats = [
            "%Y-%B-%d",           # Format: 2042-March-21st
            "%d-%B-%Y",           # Format: 21st-March-2042
            "%Y-%m-%d",           # Format: 2042-03-21
            "%d-%m-%Y",           # Format: 21-03-2042
        ]
        # Clean the input date string by removing unwanted suffix like 'st', 'nd', 'rd', 'th'
        time_str = time_str.replace('st', '').replace('nd', '').replace('rd', '').replace('th', '')
        
        for date_format in date_formats:
            try:
                # Attempt to parse the date using the given format
                return datetime.strptime(time_str, date_format)
            except ValueError:
                continue
        
        # If no format matched, return None or raise an error
        raise ValueError(f"Unrecognized date format: {time_str}")
    
    def month_to_val(self, month):
        month_dict = {
            "January": 1,
            "February": 2,
            "March": 3,
            "April": 4,
            "May": 5,
            "June": 6,
            "July": 7,
            "August": 8,
            "September": 9,
            "October": 10,
            "November": 11,
            "December": 12
        }
        if month in month_dict:
            return month_dict[month]
        else: 
            if 0 < int(month) <= 12:
                return str(int(month))
            else:
                raise ValueError(f"Unrecognised month format: {month}")

    def day_to_val(self, day):
        day_dict = {
            '1st': 1, '2nd': 2, '3rd': 3, '4th': 4, '5th': 5, '6th': 6, '7th': 7, 
            '8th': 8, '9th': 9, '10th': 10, '11th': 11, '12th': 12, '13th': 13, 
            '14th': 14, '15th': 15, '16th': 16, '17th': 17, '18th': 18, '19th': 19, 
            '20th': 20, '21st': 21, '22nd': 22, '23rd': 23, '24th': 24, '25th': 25, 
            '26th': 26, '27th': 27, '28th': 28, '29th': 29, '30th': 30, '31st': 31
        }

        if day in day_dict:
            return day_dict[day]
        else:
            if 0 < int(day) <= 31:
                return str(int(day))
            else:
                raise ValueError(f"Unrecognised day format: {day}")

    # 
    # ====================================
    # Evaluating Time from a Tree
    # ====================================
    # 

    def evaluate_time_tree(self, time_tree) -> datetime:
        year = ""
        month = ""
        day = ""
        for c in time_tree.children:
            if c.type == "year":
                year = c.text.decode("utf-8")
            elif c.type == "month":
                month = self.month_to_val(c.text.decode("utf-8"))
            elif c.type == "day":
                day = self.day_to_val(c.text.decode("utf-8"))
        date_format = "%Y-%m-%d"
        return datetime.strptime(f"{year}-{month}-{day}", date_format)



    def month_to_string(self, month):
        month_dict = {
            1: "January",
            2: "February",
            3: "March",
            4: "April",
            5: "May",
            6: "June",
            7: "July",
            8: "August",
            9: "September",
            10: "October",
            11: "November",
            12: "December"
        }
        return month_dict[month]

    def day_to_string(self, day):
        day_dict = {
            1: '1st', 2: '2nd', 3: '3rd', 4: '4th', 5: '5th', 6: '6th', 7: '7th',
            8: '8th', 9: '9th', 10: '10th', 11: '11th', 12: '12th', 13: '13th',
            14: '14th', 15: '15th', 16: '16th', 17: '17th', 18: '18th', 19: '19th',
            20: '20th', 21: '21st', 22: '22nd', 23: '23rd', 24: '24th', 25: '25th',
            26: '26th', 27: '27th', 28: '28th', 29: '29th', 30: '30th', 31: '31st'
        }
        return day_dict[day]


    # 
    # ====================================
    # Returning Time from a String
    # ====================================
    # 
    def return_time_str(self, time_datetime) -> str:

        month = self.month_to_string(time_datetime.month)
        day = self.day_to_string(time_datetime.day)
        year = time_datetime.year

        return f"{day}-{month}-{year}"