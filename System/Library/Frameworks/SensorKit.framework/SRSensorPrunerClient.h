/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientPruning.h>

@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning> {

	SRSensorPruner* _pruner;

}

@property (__weak) SRSensorPruner * pruner;              //@synthesize pruner=_pruner - In the implementation block
+(id)prunerClientWithPruner:(id)arg1 ;
-(void)resetDatastoreFiles:(id)arg1 ;
-(SRSensorPruner *)pruner;
-(id)initWithPruner:(id)arg1 ;
-(void)setPruner:(SRSensorPruner *)arg1 ;
@end
