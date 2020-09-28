/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSUUID, NWActivityMetricData, NSNumber;

@interface NWActivityFragment : NSManagedObject

@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSUUID * uuid; 
@property (nonatomic,retain) NWActivityMetricData * metricData; 
@property (nonatomic,copy) NSNumber * type; 
+(id)entityName;
@end
