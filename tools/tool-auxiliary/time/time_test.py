from datetime import datetime

class TimeTest:
    """
    # This is a template for a testing suite.

    # Although primitive, it is a start to how a test suite may be written.

    # One should include all the relevant tests for an overridden class and ensure that it is compatible with the rest of the system.
    """

    def test_suite(self, time_override):
        if not self.test_convert(time_override.return_time_str, datetime.now()):
            return False
        else:
            return True
        

    def test_return(self, function, time_str):
        if isinstance(function(time_str), datetime):
            return True
        else:
            return False

    def test_convert(self, function, date_time):
        if isinstance(function(date_time), str):
            return True
        else:
            return False