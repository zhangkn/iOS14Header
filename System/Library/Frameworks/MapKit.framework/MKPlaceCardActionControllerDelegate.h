/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKPlaceCardActionControllerDelegate <NSObject>
@optional
-(void)placeCardActionControllerDidSelectAddToContacts:(id)arg1 fromView:(id)arg2;
-(void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(id)arg1;
-(void)placeCardActionControllerDidSelectAddPhoto:(id)arg1 presentingViewController:(id)arg2 progressObserver:(id)arg3 sourceView:(id)arg4;
-(void)placeCardActionControllerDidSelectAddToMapsHome:(id)arg1;
-(void)placeCardActionControllerDidSelectRemoveFromMapsHome:(id)arg1;
-(void)placeCardActionControllerDidSelectRefineLocation:(id)arg1;
-(void)placeCardActionControllerDidSelectChangeAddress:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToCollection:(id)arg1;
-(void)placeCardActionControllerDidSelectAddToExistingContact:(id)arg1 fromView:(id)arg2;
-(void)placeCardActionControllerDidSelectRemoveMarker:(id)arg1;
-(void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(id)arg1;
-(void)placeCardActionControllerDidRequestCopy:(id)arg1;
-(void)placeCardActionControllerDidSelectRequestInformedConsentForAddingContributions:(id)arg1;
-(void)placeCardActionControllerDidSelectSimulateLocation:(id)arg1;
-(void)placeCardActionControllerDidSelectOpenInSkyline:(id)arg1;
-(void)placeCardActionControllerDidSelectionOpenInPinpoint:(id)arg1;
-(void)placeCardActionControllerDidSelectionOpenBrandCard:(id)arg1;
-(void)placeCardActionControllerDidSelectViewAllPhotos:(id)arg1 presentingViewController:(id)arg2;

@required
-(void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
-(void)placeCardActionControllerDidSelectReportAProblem:(id)arg1 fromView:(id)arg2;

@end

