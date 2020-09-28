/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSInformant.h>

@interface CLSClassificationInformant : CLSInformant
+(id)familyIdentifier;
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
-(id)gatherCluesForInvestigation:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(double)_confidenceForCount:(unsigned long long)arg1 mu:(double)arg2 sigma:(double)arg3 ;
@end
