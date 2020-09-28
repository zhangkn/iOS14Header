/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, NSMutableArray, NSError;

@interface _UILibArchiveStreamingReader : NSObject {

	long long _state;
	ui_archiveRef _laArchive;
	int _laArchiveType;
	NSString* _laArchiveTypeName;
	int _laProcessingState;
	long long _nextLoadedItemEntrySequenceIndex;
	NSMutableArray* _readableLoadedItemEntryQueue;
	NSError* _readError;
	NSString* _archivePath;
	ui_archiveRef _underlyingArchive;
	long long _appleDoubleIdentificationType;

}

@property (nonatomic,readonly) NSString * archivePath;                                    //@synthesize archivePath=_archivePath - In the implementation block
@property (nonatomic,readonly) ui_archiveRef underlyingArchive;                           //@synthesize underlyingArchive=_underlyingArchive - In the implementation block
@property (assign,nonatomic) long long appleDoubleIdentificationType;                     //@synthesize appleDoubleIdentificationType=_appleDoubleIdentificationType - In the implementation block
@property (nonatomic,readonly) NSString * openedArchiveUnderlyingFormatName; 
-(BOOL)open;
-(void)close;
-(id)_loadItemByReadingAttributesFromUnderlyingArchiveEntry:(ui_archive_entryRef)arg1 ;
-(BOOL)_shouldReportAsAppleDoubleItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2 ;
-(BOOL)_readItemsWithShouldVisitBlock:(/*^block*/id)arg1 visitorBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)_nextSimpleItemFromPendingQueueOrLibArchiveRead;
-(BOOL)readLogicalItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(NSString *)openedArchiveUnderlyingFormatName;
-(id)_debugLoadAndPrintAllRemainingItems;
-(long long)appleDoubleIdentificationType;
-(BOOL)_shouldReportAsLogicalItem:(id)arg1 withConfirmedAppleDoubleFiles:(id)arg2 ;
-(NSString *)archivePath;
-(BOOL)_openArchive;
-(void)_closeArchive;
-(id)initForReadingArchivePath:(id)arg1 ;
-(ui_archiveRef)underlyingArchive;
-(void)setAppleDoubleIdentificationType:(long long)arg1 ;
-(BOOL)readAllItemsWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
@end
