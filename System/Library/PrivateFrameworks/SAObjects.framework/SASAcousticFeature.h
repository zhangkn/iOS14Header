/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSNumber, NSString;

@interface SASAcousticFeature : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * acousticFeaturePerFrame; 
@property (nonatomic,copy) NSNumber * frameDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acousticFeature;
+(id)acousticFeatureWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_acousticFeature;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setFrameDuration:(NSNumber *)arg1 ;
-(void)setAcousticFeaturePerFrame:(NSArray *)arg1 ;
-(NSArray *)acousticFeaturePerFrame;
-(NSNumber *)frameDuration;
@end
