/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKHIDSystemInterfacing, BKIOHIDServiceMatcherDataProviding, BKHIDEventProcessorRegistering;
@interface BKHIDEventProcessorCreationContext : NSObject {

	id<BKHIDSystemInterfacing> _systemInterface;
	id<BKIOHIDServiceMatcherDataProviding> _serviceMatcherDataProvider;
	id<BKHIDEventProcessorRegistering> _eventProcessorRegistry;

}

@property (nonatomic,retain) id<BKHIDSystemInterfacing> systemInterface;                                     //@synthesize systemInterface=_systemInterface - In the implementation block
@property (nonatomic,retain) id<BKIOHIDServiceMatcherDataProviding> serviceMatcherDataProvider;              //@synthesize serviceMatcherDataProvider=_serviceMatcherDataProvider - In the implementation block
@property (nonatomic,retain) id<BKHIDEventProcessorRegistering> eventProcessorRegistry;                      //@synthesize eventProcessorRegistry=_eventProcessorRegistry - In the implementation block
-(id<BKHIDSystemInterfacing>)systemInterface;
-(void)setSystemInterface:(id<BKHIDSystemInterfacing>)arg1 ;
-(id<BKIOHIDServiceMatcherDataProviding>)serviceMatcherDataProvider;
-(void)setServiceMatcherDataProvider:(id<BKIOHIDServiceMatcherDataProviding>)arg1 ;
-(id<BKHIDEventProcessorRegistering>)eventProcessorRegistry;
-(void)setEventProcessorRegistry:(id<BKHIDEventProcessorRegistering>)arg1 ;
@end
