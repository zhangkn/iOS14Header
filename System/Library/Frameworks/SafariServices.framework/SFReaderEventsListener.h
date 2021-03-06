/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFReaderEventsListener <NSObject>
@required
-(void)didCollectReadingListItemInfo:(id)arg1 bookmarkID:(id)arg2;
-(void)didPrepareReaderContentForPrinting:(id)arg1;
-(void)didDetermineReaderAvailabilityForDynamicCheck:(id)arg1;
-(void)didSetReaderConfiguration:(id)arg1;
-(void)contentDidBecomeReadyWithDetectedLanguage:(id)arg1;
-(void)readerTextWasExtracted:(id)arg1 withMetadata:(id)arg2 wasDeterminingAvailabilility:(BOOL)arg3;
-(void)didCollectArticleContent:(id)arg1;
-(void)didCollectReaderContentForMail:(id)arg1;
-(void)didDetermineReaderAvailability:(id)arg1;

@end

