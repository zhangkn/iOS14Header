/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SMBSearch/SMBSearch-Structs.h>
@class wspContext;

@interface wspQueryStatusIn : NSObject {

	SCD_Struct_ws1 msghdr;
	wspContext* _wctx;

}

@property (retain) wspContext * wctx;              //@synthesize wctx=_wctx - In the implementation block
-(wspContext *)wctx;
-(int)encodeBuffer:(id)arg1 BufferOffset:(unsigned)arg2 BytesWritten:(unsigned*)arg3 ;
-(id)initWithCtx:(id)arg1 ;
-(void)setWctx:(wspContext *)arg1 ;
@end
