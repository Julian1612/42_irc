IRC Server and Client - Weechat
Overview

This project is a collaborative effort between [Your Name] and [DGross] to create an IRC (Internet Relay Chat) server and client using Weechat. IRC is a protocol for real-time text messaging and has been widely used for online communication in various communities. Weechat is a versatile IRC client that we utilized for this project. For more detailed information about the project and its functionality, please refer to the subject.

Installation

Before using the IRC server and client, ensure that you have the necessary dependencies installed on your system. We recommend setting up Weechat as your IRC client:

Clone the Repository:

bash
Copy code
git clone https://github.com/[YourUsername]/[YourRepositoryName].git
Compile and Run the IRC Server:

Follow the instructions provided in the server's README to compile and start the IRC server.

Install Weechat:

You can install Weechat on your system using your package manager. For example, on a Debian-based system, you can run:

arduino
Copy code
sudo apt-get install weechat
Launch Weechat:

Start Weechat by running the following command:

Copy code
weechat
Basic Usage

Now that you have the IRC server running and Weechat installed, you can connect to the server and interact with it. Here are three examples of how to use Weechat:

Connect to the IRC Server:

Open Weechat and connect to your IRC server by running the following command in Weechat's command input:

css
Copy code
/server [your_server_ip] [port]
Replace [your_server_ip] with the IP address of your IRC server and [port] with the port number.

Join a Channel:

After connecting to the server, you can join an existing channel or create your own. To join a channel, use the following command:

bash
Copy code
/join #[channel_name]
Replace [channel_name] with the name of the channel you want to join.

Chat in the Channel:

Once you are in a channel, you can start chatting with other users. Simply type your message in the input bar at the bottom of Weechat and press Enter to send your message to the channel.

Explore the world of real-time text communication with Weechat and our IRC server-client solution. Enjoy chatting and collaborating with others in various channels and communities.
