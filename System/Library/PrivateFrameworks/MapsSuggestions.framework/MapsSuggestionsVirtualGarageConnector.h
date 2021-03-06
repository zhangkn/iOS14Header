/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MapsSuggestionsVirtualGarageConnector <MapsSuggestionsObject>
@property (assign,nonatomic,__weak) id<MapsSuggestionsVirtualGarageConnectorDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<MapsSuggestionsVirtualGarageConnectorDelegate>)delegate;
-(void)stopObservingVG;
-(void)openVGConnection;
-(void)closeVGConnection;
-(void)startObservingVG;
-(void)fetchUnpairedVehiclesWithHandler:(/*^block*/id)arg1;
-(void)fetchStateOfChargeForVehicleWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2;

@end

