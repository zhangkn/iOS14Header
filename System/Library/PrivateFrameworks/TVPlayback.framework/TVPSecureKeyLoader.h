/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPSecureKeyLoaderDelegate;
@class TVPPlaybackReportingEventCollection;

@interface TVPSecureKeyLoader : NSObject {

	id<TVPSecureKeyLoaderDelegate> _delegate;
	TVPPlaybackReportingEventCollection* _eventCollection;

}

@property (assign,nonatomic,__weak) id<TVPSecureKeyLoaderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) TVPPlaybackReportingEventCollection * eventCollection;              //@synthesize eventCollection=_eventCollection - In the implementation block
-(void)setDelegate:(id<TVPSecureKeyLoaderDelegate>)arg1 ;
-(id<TVPSecureKeyLoaderDelegate>)delegate;
-(TVPPlaybackReportingEventCollection *)eventCollection;
-(void)setEventCollection:(TVPPlaybackReportingEventCollection *)arg1 ;
-(void)startLoadingCertificateDataForRequest:(id)arg1 ;
-(void)startLoadingContentIdentifierDataForRequest:(id)arg1 ;
-(void)startLoadingKeyResponseDataForRequest:(id)arg1 ;
-(void)sendStopRequest;
@end

