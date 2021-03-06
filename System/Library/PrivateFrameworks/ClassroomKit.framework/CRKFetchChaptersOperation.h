/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATOperation.h>

@class NSString;

@interface CRKFetchChaptersOperation : CATOperation {

	NSString* mPath;
	NSString* mIdentifierType;
	NSString* mIdentifier;

}
-(id)initWithRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)isAsynchronous;
-(id)initWithBook:(id)arg1 ;
-(void)main;
-(id)initWithBookPath:(id)arg1 identifierType:(id)arg2 identifier:(id)arg3 ;
-(void)parseOPFFilePathOperationDidFinish:(id)arg1 ;
-(void)parseOFPPackageContentsOperationDidFinish:(id)arg1 ;
-(void)parseTableOfContentsOperationDidFinish:(id)arg1 ;
@end

