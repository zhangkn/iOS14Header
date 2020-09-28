/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CALayer, NSSet;

@interface HUCAPackageLayer : NSObject {

	NSString* _name;
	CALayer* _layer;
	NSSet* _tags;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CALayer * layer;              //@synthesize layer=_layer - In the implementation block
@property (nonatomic,readonly) NSSet * tags;                 //@synthesize tags=_tags - In the implementation block
+(id)_tagsForName:(id)arg1 ;
+(id)_allTags;
-(CALayer *)layer;
-(NSSet *)tags;
-(void)_applyPrimaryColorWithModifiers:(id)arg1 ;
-(id)initWithName:(id)arg1 layer:(id)arg2 ;
-(void)applyModifiers:(id)arg1 ;
-(NSString *)name;
@end
