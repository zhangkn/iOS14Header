/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, _UIDictionaryManager, NSMutableDictionary;

@interface _UIRemoteDictionaryViewController : UITableViewController {

	NSArray* _availableDictionaries;
	_UIDictionaryManager* _dictionaryAssetManager;
	NSMutableDictionary* _downloadingAssets;

}

@property (nonatomic,retain) _UIDictionaryManager * dictionaryAssetManager;              //@synthesize dictionaryAssetManager=_dictionaryAssetManager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadingAssets;                    //@synthesize downloadingAssets=_downloadingAssets - In the implementation block
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(NSMutableDictionary *)downloadingAssets;
-(id)_cloudBackgroundImage;
-(id)_downloadArrowImage;
-(void)_handleDownloadButton:(id)arg1 ;
-(id)_downloadImageWithTintColor:(id)arg1 ;
-(void)_startDownloadForDictionary:(id)arg1 ;
-(void)setDictionaryAssetManager:(_UIDictionaryManager *)arg1 ;
-(id)_downloadButton;
-(void)setDownloadingAssets:(NSMutableDictionary *)arg1 ;
-(_UIDictionaryManager *)dictionaryAssetManager;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

