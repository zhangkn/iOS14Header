/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSProgress;

@interface PLProgressFollower : NSObject {

	/*^block*/id _progressHandler;
	NSProgress* _sourceProgress;
	NSProgress* _outputProgress;

}

@property (retain) NSProgress * outputProgress;                //@synthesize outputProgress=_outputProgress - In the implementation block
@property (readonly) NSProgress * sourceProgress;              //@synthesize sourceProgress=_sourceProgress - In the implementation block
-(NSProgress *)outputProgress;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setOutputProgress:(NSProgress *)arg1 ;
-(NSProgress *)sourceProgress;
-(id)initWithSourceProgress:(id)arg1 progressHandler:(/*^block*/id)arg2 ;
@end

