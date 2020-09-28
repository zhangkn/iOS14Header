/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:06 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REFeatureSet.h>

@class NSSet;

@interface _REFeatureSet : REFeatureSet {

	NSSet* _features;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFeatures:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RE24*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(id)initWithFeature:(id)arg1 ;
-(id)featureWithName:(id)arg1 ;
-(BOOL)containsFeature:(id)arg1 ;
@end
