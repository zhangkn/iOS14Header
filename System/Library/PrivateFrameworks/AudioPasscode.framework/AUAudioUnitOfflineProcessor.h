/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@class AUAudioUnit;

@interface AUAudioUnitOfflineProcessor : NSObject {

	CAExtAudioFile* _srcFile;
	CAExtAudioFile* _destFile;
	AUAudioUnit* _audioUnit;
	/*^block*/id _renderBlock;
	unique_ptr<CABufferList, std::__1::default_delete<CABufferList> >* _srcBufferList;
	unique_ptr<CABufferList, std::__1::default_delete<CABufferList> >* _destBufferList;
	/*^block*/id _pullInputBlock;
	long long _assetLength;

}

@property (nonatomic,readonly) long long assetLength;              //@synthesize assetLength=_assetLength - In the implementation block
-(BOOL)run;
-(long long)assetLength;
-(id)initWithAudioUnit:(id)arg1 inputFileURL:(id)arg2 outputFileURL:(id)arg3 ioSampleRate:(long long)arg4 ;
@end
