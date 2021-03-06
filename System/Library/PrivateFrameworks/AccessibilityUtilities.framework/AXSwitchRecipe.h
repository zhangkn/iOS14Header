/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSUUID, NSArray;

@interface AXSwitchRecipe : NSObject {

	NSString* _name;
	NSUUID* _uuid;
	NSArray* _mappings;
	double _timeout;
	NSString* _unlocalizedName;
	NSString* _menuIconIdentifier;

}

@property (nonatomic,retain) NSUUID * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSArray * mappings;                         //@synthesize mappings=_mappings - In the implementation block
@property (assign,nonatomic) double timeout;                             //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSString * unlocalizedName;                 //@synthesize unlocalizedName=_unlocalizedName - In the implementation block
@property (nonatomic,readonly) BOOL shouldContinueScanning; 
@property (nonatomic,copy) NSString * menuIconIdentifier;                //@synthesize menuIconIdentifier=_menuIconIdentifier - In the implementation block
+(id)recipeWithDictionaryRepresentation:(id)arg1 ;
-(double)timeout;
-(NSString *)unlocalizedName;
-(void)setTimeout:(double)arg1 ;
-(id)init;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(void)setUnlocalizedName:(NSString *)arg1 ;
-(void)setMappings:(NSArray *)arg1 ;
-(NSArray *)mappings;
-(NSString *)name;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setMenuIconIdentifier:(NSString *)arg1 ;
-(NSString *)menuIconIdentifier;
-(BOOL)shouldContinueScanning;
@end

