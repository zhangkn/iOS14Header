/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskMessage.h>

@class CATTaskProgress;

@interface CATTaskMessageProgressUpdate : CATTaskMessage {

	CATTaskProgress* _progress;

}

@property (nonatomic,copy) CATTaskProgress * progress;              //@synthesize progress=_progress - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithTaskUUID:(id)arg1 progress:(id)arg2 ;
-(void)setProgress:(CATTaskProgress *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CATTaskProgress *)progress;
@end

