/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@interface HMDPhotoLibraryImportingPhotoLibraryRenamedPersonsLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	long long _numberOfRenamedPersons;

}

@property (readonly) long long numberOfRenamedPersons;              //@synthesize numberOfRenamedPersons=_numberOfRenamedPersons - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(long long)numberOfRenamedPersons;
-(id)initWithNumberOfRenamedPersons:(long long)arg1 ;
@end

