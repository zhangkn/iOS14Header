/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFStream <NSObject,NSLocking>
@required
-(BOOL)openStream;
-(void)closeStream;
-(long long)streamLength;
-(long long)streamPosition;
-(BOOL)rewindStream;
-(BOOL)rewindStream:(long long)arg1;
-(BOOL)advanceStream;
-(BOOL)advanceStream:(long long)arg1 distanceMoved:(long long*)arg2;
-(id)getStreamError;
-(unsigned long long)preferredStreamBlockSize;

@end

