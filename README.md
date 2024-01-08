# SpatiaList: a multi-user persistent post-it placement application in mixed-reality

![SpatiaList Demo Image](/resources/app.png)

## Authors
- [Beyzanur Coban (ETHZ)](https://github.com/beyzanurcoban)
- [Zeno Hamers (ETHZ)](https://github.com/H-Zeno)
- [Deepana Ishtaweera (ETHZ)](https://github.com/deepanaishtaweera)
- [Malo Ranzetti (ETHZ, EPFL)](https://github.com/mrztti)

<img src="https://github.com/spatia-list/spatialist/blob/main/resources/ethz-logo.png" height=60px> 

## Supervisors
- Mihai Dusmanu (Microsoft Research)
- Patrick Misteli (Microsoft Research)

<img src="https://github.com/spatia-list/spatialist/blob/main/resources/microsoft-logo.png" height=60px>

### Abstract
SpatiaList is a HoloLens 2 application designed for spatially persistent digital post-its in a Mixed Reality (MR) environment. This project, in collaboration with Microsoft, is intended to showcase the potential of MR technologies to enable multi-user collaboration scenarios.
SpatiaList maintains consistency across sessions, space and users of MR objects, which is not implemented out-of-the-box in current MR devices. The system architecture is designed to support persistence of holographic post-its, the core component being Azure Spatial Anchors (ASA). 
A GUI was designed (for MR devices) and on the Web (for non-MR devices). A user study with 16 participants has been performed to evaluate the app's performance. Spatial and session consistency was observed. In stable internet conditions, multi-user teamwork scenarios could be effectively performed.
The user study shows an overall positive sentiment, with key recommendations to provide more visual cues for the post-it creation step and to enable users to work on the same post-it simultaneously.

#### Keywords: `Mixed Reality`, `HoloLens 2`, `Azure Spatial Anchors`, `Unity`, `Spatial Persistence`

## Demo video

TODO

## Installation instructions

This project must be loaded in Unity Editor and compiled for the HoloLens 2. 
A valid Azure Spatial Anchors account is required to run the application, and tokens must be provided in the Unity Editor in the `Azure Spatial Anchors Manager` component.

The backend system must be deployed on a publically acessible machine. The backend code is available on the [following repository](https://github.com/spatia-list/spatialist-backend), which contains deployment instructions as well as documentation for the API.
A CosmosDB database is required to run the backend. The database must be configured with the following collections:
- `spatialist_postits`
- `spatialist_organizations` 
- `spatialist_anchors`
- `spatialist_swipes`

The public URL must then be added to the Unity Editor in the `Network Manager` component.

## Full report

The full report is available [here](/resources/report.pdf).





