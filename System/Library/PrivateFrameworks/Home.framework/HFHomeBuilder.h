/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFNamedItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder;

@interface HFHomeBuilder : HFItemBuilder <HFNamedItemBuilder> {

	NSString* _name;
	NSString* _userNotes;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * userNotes;                                               //@synthesize userNotes=_userNotes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)homeKitRepresentationClass;
-(id)commitItem;
-(id)performValidation;
-(NSString *)userNotes;
-(void)setName:(NSString *)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)createHome;
-(id)updateName;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
-(id)updateUserNotes;
-(void)setUserNotes:(NSString *)arg1 ;
-(NSString *)name;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
-(void)setHome:(id)arg1 ;
@end

