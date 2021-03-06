/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentViewFactory.h>

@protocol NFResolver;
@class NSString;

@interface SXResolverComponentViewFactory : NSObject <SXComponentViewFactory> {

	id<NFResolver> _resolver;

}

@property (nonatomic,readonly) id<NFResolver> resolver;              //@synthesize resolver=_resolver - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResolver:(id)arg1 ;
-(int)role;
-(Class)componentViewClass;
-(id<NFResolver>)resolver;
-(NSString *)type;
-(id)componentViewForComponent:(id)arg1 ;
@end

