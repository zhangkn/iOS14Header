/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCBlockOperationContext.h>

@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject <MCBlockOperationContext> {

	MCBlockOperation* _operation;

}

@property (nonatomic,retain) MCBlockOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(void)setOperation:(MCBlockOperation *)arg1 ;
-(MCBlockOperation *)operation;
-(void)endBlockOperation;
@end
