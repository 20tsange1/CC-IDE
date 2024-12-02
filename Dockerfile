# Use an official Python runtime as a parent image
FROM python:3.10.7

# Set the working directory in the container
WORKDIR /app

# Copy the current directory contents into the container at /app
COPY . /app

# Install any needed packages specified in requirements.txt
RUN pip install --no-cache-dir -r requirements.txt

# Install required tools
RUN apt-get update && apt-get install -y curl
RUN curl -L https://github.com/tree-sitter/tree-sitter/releases/download/v0.24.2/tree-sitter-linux-arm64.gz \
    | gunzip -c > /usr/local/bin/tree-sitter && chmod +x /usr/local/bin/tree-sitter

# Make port 5000 available to the world outside this container
EXPOSE 5000 8080

# Define environment variable
ENV PYTHONDONTWRITEBYTECODE=1
ENV PYTHONUNBUFFERED=1

# Run app.py when the container launches
CMD ["python", "app.py"]
