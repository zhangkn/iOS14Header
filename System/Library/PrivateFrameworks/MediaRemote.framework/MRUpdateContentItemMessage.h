/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlayerPath, NSArray;

@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlayerPath * playerPath; 
@property (nonatomic,readonly) NSArray * contentItems; 
-(NSArray *)contentItems;
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 ;
-(unsigned long long)priority;
@end
