/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCHeadlineClusterOrdering.h>

@class NSString;

@interface FCHeadlineClusterOrderingPersonalizedTopical : NSObject <FCHeadlineClusterOrdering>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)orderTopicsWithClusteredHeadlines:(id)arg1 additionalHeadlines:(id)arg2 subscribedTagIDs:(id)arg3 scoresByArticleID:(id)arg4 personalizer:(id)arg5 tagNameProvider:(/*^block*/id)arg6 personalizationTreatment:(id)arg7 translationProvider:(id)arg8 ;
@end

