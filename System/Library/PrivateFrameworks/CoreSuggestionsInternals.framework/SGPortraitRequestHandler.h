/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/SGPortraitRequestProtocol.h>

@class PPInternalRequestHandler;

@interface SGPortraitRequestHandler : NSObject <SGPortraitRequestProtocol> {

	PPInternalRequestHandler* _intRequestHandler;

}
-(id)init;
-(void)extractionsFromUserAction:(id)arg1 searchableItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)extractionsFromSearchableItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extractionsFromPipelineEntity:(id)arg1 pipeline:(id*)arg2 ;
@end

