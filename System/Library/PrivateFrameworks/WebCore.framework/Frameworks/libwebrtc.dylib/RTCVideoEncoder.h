/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTCVideoEncoder <NSObject>
@required
-(void)setCallback:(/*^block*/id)arg1;
-(id)implementationName;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2;
-(id)scalingSettings;

@end

