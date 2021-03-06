/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSMapTable;


@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>
@property (nonatomic,readonly) NSArray * inputProtocols; 
@property (nonatomic,readonly) NSArray * outputProtocols; 
@property (nonatomic,retain) NSMapTable * inputOperations; 
@required
-(NSArray *)inputProtocols;
-(NSMapTable *)inputOperations;
-(NSArray *)outputProtocols;
-(void)setInputOperations:(id)arg1;

@end

