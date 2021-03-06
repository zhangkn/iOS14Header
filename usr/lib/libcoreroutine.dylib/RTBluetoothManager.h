/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
#import <libcoreroutine.dylib/RTService.h>

@interface RTBluetoothManager : RTService
+(BOOL)supportsNotificationName:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)carKitConnectionStateToString:(long long)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)_fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
-(void)fetchCarKitConnectedStateWithHandler:(/*^block*/id)arg1 ;
@end

