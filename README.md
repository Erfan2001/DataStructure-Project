# Data Structure Project

 ## Project description:

Introduction:

The police are fighting a dangerous gang of fuel and drug smuggling to the Persian Gulf countries and the eastern neighboring countries. In its initial investigations, this organization noticed the existence of a very complex economic and political network in this gang. The people of this gang formed this network by bribing people in the customs, port organization, National Bank of Iran, oil ministry, and police. In such a way these people have bribed people in the port organization to prevent them from inspecting their barges in the ports or in the customs their people give them permission to enter the country without checking their containers. On the other hand, in the Ministry of Oil, they cooperate with people who supply them with fuel and they transport the fuel to the other side of the border. Sometimes, in order to transfer these fuels to the neighboring countries, they easily move the fuels across the border with the coordination of people in the border police. In order to transfer this amount of money and not be identified in the banking network, they have invented a very interesting method, in this way, they have hired people in the National Bank of Iran to transfer their money in small parts between accounts. In this way, from the banking point of view, a large amount has not been transferred and the monitoring systems do not notice the existence of this corruption. Police experts have speculated that influential people in these institutions and organizations have cooperated with smugglers during the past two years. The police have also identified the smugglers' bridges. Now, the police need your help to track down the people involved in these institutions so that they can identify, arrest, and hand over these people to the judicial authorities with the help of data science. You should write a data analysis software for this entity.

Definitions:

In this software, we have a graph whose data is in the form of vertices and edges.

Vertices: Vertices in the form of data like; It means person, bank account, house, car, and mobile phone number. Each vertex has a unique key to distinguish it from other vertices, and each of these vertices contains characteristics that give it an identity characteristic. In the following, we examine the characteristics of each vertex.

Person vertex: This head has some characteristics of a person, such as his name, surname, national code, date of birth, place of birth, and occupation. The key is the national code of the person.

Bank account vertex: This head includes the characteristics of the bank account owner's national code, the bank name of that bank account, the account number, and the account number of that bank account. The key to this vertex is the account number.

House vertex: This vertex includes characteristics such as the homeowner's national code, price, zip code, size, and address. The key to this head is the zip code of the house.

Car vertex: This head includes characteristics such as license plate number, national code of its owner, model, and color. The key to this vertex is the license plate number of that car.

Mobile phone vertex: This header contains characteristics such as the owner's national code, SIM card number, and operator name. The key to this is the SIM card number.

Edges: Edges are also in the form of data such as; Ownership, transaction, contact, and kinship. Each edge contains two characteristics "from" and "to". Also, each edge needs a unique key to distinguish it from other edges. In addition to these, ridges include characteristics that give identity to that ridge. In the following, we examine the characteristics of each edge.

Ownership edge: The edge of ownership is connected to a car or a house from a person. This ridge includes the characteristics of the civil registration document number, the time of possession and the amount paid. The key to this ridge is the number of the civil registration document.

Transaction edge: The ownership edge is connected from one bank account to another bank account. This edge includes the characteristics of transaction time, transaction number, transaction amount. The key of this edge is the transaction number.
Contact edge: Contact edge connects from one mobile phone number to another mobile phone number. This edge includes the characteristics of the call number, call time and call duration. The key to this is the contact number.
Kinship edge: The line of kinship is connected from one person to another. This edge includes the characteristics of the ratio and the start time of the ratio. This identification key is a combination of the national codes of both people.

Phases of implementation:

First phase: In the first phase, the police experts ask you to enter the information in your system by receiving a set of data in the form of web policy.
and then display them.

Second phase: In the second phase, experts have guessed that influential people in the Ports and Customs Organization must have bought houses or cars for themselves or their first-class relatives with the money received from smugglers. At the end of this phase, there should be a list of people who entered one of these two institutions in the last two years
They work and also show that they or one of their relatives bought a house or a car.

Third phase: In the third phase, experts seek to verify their initial guess and obtain more evidence. The experts are currently looking for people who have money deposited into their accounts by smugglers through several intermediaries (up to 5 intermediaries) and who work in one of the two institutions and organizations in question and in the last two years they or one of their relatives or find the car they bought.

Fourth phase: Now it is possible that all the events that have been investigated so far are accidental. For this reason, the experts want to check for further investigation whether the traffickers have contacted the suspicious people or not.

 
 *Implemented By Erfan Nourbakhsh*
 *April 2020*
