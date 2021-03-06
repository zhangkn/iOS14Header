/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _SFPasswordIconControllerDelegate;
#import <SafariServices/SafariServices-Structs.h>
@class WBSCache, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, _SFSiteMetadataManager;

@interface _SFPasswordIconController : NSObject {

	WBSCache* _iconCache;
	NSMutableDictionary* _domainsToExtractedBackgroundColors;
	NSMutableSet* _touchIconRequests;
	NSMutableDictionary* _domainToItems;
	NSMutableSet* _domainsThatHaveRequestedIcon;
	NSMutableArray* _blocksAwaitingHistoryItems;
	NSObject*<OS_dispatch_queue> _queue;
	_SFSiteMetadataManager* _metadataManager;
	NSMutableDictionary* _domainToAppID;
	NSMutableArray* _blocksAwaitingSharedWebCredentialsInformation;
	BOOL _initializedHistory;
	id<_SFPasswordIconControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_SFPasswordIconControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)preferredIconSize;
-(id)initWithMetadataManager:(id)arg1 ;
-(void)clearIconFetchingState;
-(id)iconForDomain:(id)arg1 ;
-(id)backgroundColorForDomain:(id)arg1 ;
-(void)setDelegate:(id<_SFPasswordIconControllerDelegate>)arg1 ;
-(id<_SFPasswordIconControllerDelegate>)delegate;
-(void)_fetchTouchIconForDomain:(id)arg1 ;
-(void)_requestTouchIconForDomain:(id)arg1 iconDownloadingEnabled:(BOOL)arg2 ;
-(void)_checkForLocalVisitToDomain:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_populateDomainToItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchAppIconForDomain:(id)arg1 ;
-(void)_iconDidUpdateForDomain:(id)arg1 ;
-(void)_populateDomainToAppIDWithCompletion:(/*^block*/id)arg1 ;
@end

