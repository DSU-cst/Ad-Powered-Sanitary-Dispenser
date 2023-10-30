# Context Diagram

In this diagram:

External Users (Web App): Represents the users interacting with the system through the application. They request OTPs, enter the OTPs, watch ads, and collect sanitary pads.

IoT Sanitary Pad Dispenser: Represents the main system, including the dispenser, authentication mechanisms, ad display, and pad dispensing functionalities.

Ad Server/Scheduler: Represents the external system providing advertisements and scheduling them for display on the dispenser's screen.

# Container Diagram 

In this detailed container diagram:

Web App Container: This container manages the user interface, ensuring a seamless experience for users. It includes components for user input, OTP verification, and ad display functionalities. The OTP verification component interacts with the Authentication & User Management Container to validate user-provided OTPs.

Authentication & User Management Container: This container contains components responsible for user authentication and account management. The Authentication Server validates user authentication, the User Database stores user account data securely, and the OTP Generator generates and verifies OTPs for users during the login process.

Dispenser Container: This container handles the physical dispenser components. The IoT Controller manages communication with the dispenser hardware, interpreting user commands from the web app, while the Dispensing Mechanism physically releases sanitary pads to users.

Ad Management Container: This container is responsible for managing advertisements. The Ad Server stores and manages ad content, the Ad Scheduler plans and schedules ad display times, and the Ad Content Delivery component ensures the timely delivery of ad content to the dispenser screen during user interaction.
