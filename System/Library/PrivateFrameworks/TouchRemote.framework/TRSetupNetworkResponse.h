/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@interface TRSetupNetworkResponse : TRResponseMessage {

	BOOL _hasNetwork;

}

@property (assign,nonatomic) BOOL hasNetwork;              //@synthesize hasNetwork=_hasNetwork - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasNetwork;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setHasNetwork:(BOOL)arg1 ;
@end

