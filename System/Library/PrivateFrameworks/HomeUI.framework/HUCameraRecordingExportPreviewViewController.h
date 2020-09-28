/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class HMCameraClip, HMCameraProfile, NSURL, HMCameraClipFetchVideoAssetContextOperation, AVQueuePlayer, AVPlayerLooper, HUCameraRecordingPlayerView, UILabel, UIButton, UITextView, UIActivityIndicatorView, NSOperationQueue, NSString;

@interface HUCameraRecordingExportPreviewViewController : UIViewController <UITextViewDelegate> {

	BOOL _hasVideoPreview;
	HMCameraClip* _cameraClip;
	HMCameraProfile* _cameraProfile;
	NSURL* _exportURL;
	HMCameraClipFetchVideoAssetContextOperation* _videoDownloadOperation;
	AVQueuePlayer* _queuePlayer;
	AVPlayerLooper* _looper;
	HUCameraRecordingPlayerView* _playerView;
	UILabel* _descriptionLabel;
	UIButton* _submitButton;
	UITextView* _learnMoreTextView;
	/*^block*/id _completionHandler;
	id _queuePlayerObserver;
	UIActivityIndicatorView* _loadingIndicatorView;
	NSOperationQueue* _backgroundSessionQueue;

}

@property (assign,nonatomic,__weak) HMCameraClip * cameraClip;                                                  //@synthesize cameraClip=_cameraClip - In the implementation block
@property (assign,nonatomic,__weak) HMCameraProfile * cameraProfile;                                            //@synthesize cameraProfile=_cameraProfile - In the implementation block
@property (nonatomic,retain) NSURL * exportURL;                                                                 //@synthesize exportURL=_exportURL - In the implementation block
@property (nonatomic,retain) HMCameraClipFetchVideoAssetContextOperation * videoDownloadOperation;              //@synthesize videoDownloadOperation=_videoDownloadOperation - In the implementation block
@property (assign,nonatomic) BOOL hasVideoPreview;                                                              //@synthesize hasVideoPreview=_hasVideoPreview - In the implementation block
@property (assign,nonatomic,__weak) AVQueuePlayer * queuePlayer;                                                //@synthesize queuePlayer=_queuePlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLooper * looper;                                                           //@synthesize looper=_looper - In the implementation block
@property (nonatomic,retain) HUCameraRecordingPlayerView * playerView;                                          //@synthesize playerView=_playerView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                        //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIButton * submitButton;                                                           //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,retain) UITextView * learnMoreTextView;                                                    //@synthesize learnMoreTextView=_learnMoreTextView - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) id queuePlayerObserver;                                                            //@synthesize queuePlayerObserver=_queuePlayerObserver - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicatorView;                                    //@synthesize loadingIndicatorView=_loadingIndicatorView - In the implementation block
@property (nonatomic,retain) NSOperationQueue * backgroundSessionQueue;                                         //@synthesize backgroundSessionQueue=_backgroundSessionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(AVPlayerLooper *)looper;
-(NSOperationQueue *)backgroundSessionQueue;
-(UIActivityIndicatorView *)loadingIndicatorView;
-(void)setLoadingIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setPlayerView:(HUCameraRecordingPlayerView *)arg1 ;
-(HMCameraProfile *)cameraProfile;
-(void)setCameraProfile:(HMCameraProfile *)arg1 ;
-(HUCameraRecordingPlayerView *)playerView;
-(void)_addConstraints;
-(AVQueuePlayer *)queuePlayer;
-(void)setBackgroundSessionQueue:(NSOperationQueue *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setQueuePlayer:(AVQueuePlayer *)arg1 ;
-(void)setCameraClip:(HMCameraClip *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setLooper:(AVPlayerLooper *)arg1 ;
-(HMCameraClip *)cameraClip;
-(id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)completionHandler;
-(void)prepareRecordingForExport;
-(void)cancelSubmission;
-(BOOL)hasVideoPreview;
-(void)_loadPreviewInterface;
-(void)_loadLoadingInterface;
-(UITextView *)learnMoreTextView;
-(UIButton *)submitButton;
-(void)playVideoFile;
-(void)setQueuePlayerObserver:(id)arg1 ;
-(id)queuePlayerObserver;
-(void)didDismissPrivacyViewController;
-(void)setExportURL:(NSURL *)arg1 ;
-(void)setHasVideoPreview:(BOOL)arg1 ;
-(void)_displayFailureToSubmitAlert;
-(void)_stripAndTruncateRecording;
-(void)setVideoDownloadOperation:(HMCameraClipFetchVideoAssetContextOperation *)arg1 ;
-(NSURL *)exportURL;
-(void)submitCurrentClip;
-(void)showPrivacyInformation;
-(HMCameraClipFetchVideoAssetContextOperation *)videoDownloadOperation;
-(void)setSubmitButton:(UIButton *)arg1 ;
-(void)setLearnMoreTextView:(UITextView *)arg1 ;
@end
