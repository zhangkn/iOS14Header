/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:40 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUProgress;

@interface TSUProgressUserInfoObject : NSObject {

	TSUProgress* _progress;
	id _progressObserver;

}

@property (assign,nonatomic,__weak) TSUProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) id progressObserver;                        //@synthesize progressObserver=_progressObserver - In the implementation block
-(void)setProgress:(TSUProgress *)arg1 ;
-(TSUProgress *)progress;
-(id)progressObserver;
-(void)setProgressObserver:(id)arg1 ;
@end

