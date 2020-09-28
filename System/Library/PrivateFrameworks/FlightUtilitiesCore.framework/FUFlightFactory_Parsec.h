/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilitiesCore/FUFlightFactory.h>
#import <libobjc.A.dylib/FUFlightFactoryInternalProtocol.h>

@class NSString;

@interface FUFlightFactory_Parsec : FUFlightFactory <FUFlightFactoryInternalProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)loadFlightsWithNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(void)loadFlightStructuresWithFlightNumber:(unsigned long long)arg1 airlineCode:(id)arg2 date:(id)arg3 dateType:(long long)arg4 userAgent:(id)arg5 sessionID:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
@end
