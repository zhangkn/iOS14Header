/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHImportAsset.h>

@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset {

	PFAssetBundle* _assetBundle;

}

@property (nonatomic,retain) PFAssetBundle * assetBundle;              //@synthesize assetBundle=_assetBundle - In the implementation block
-(id)assetDescription;
-(id)initWithAssetBundleAtURL:(id)arg1 withImportSource:(id)arg2 ;
-(PFAssetBundle *)assetBundle;
-(void)setAssetBundle:(PFAssetBundle *)arg1 ;
-(id)keywordTitles;
-(id)accessibilityDescription;
-(id)title;
-(id)exifImageDate;
-(id)exifTimeZone;
@end

