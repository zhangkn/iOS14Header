/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistoryVisitPredicate.h>
#import <libobjc.A.dylib/WBSHistoryTombstonePredicate.h>

@class NSString;

@interface WBSHistoryUniversalPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)evaluateServiceTombstone:(id)arg1 ;
-(BOOL)evaluateVisit:(id)arg1 ;
-(BOOL)evaluateServiceVisit:(id)arg1 ;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateTombstone:(id)arg1 ;
@end

