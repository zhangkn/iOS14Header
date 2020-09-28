/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVMetadataItem.h>

@class AVLazyValueLoadingMetadataItemInternal;

@interface AVLazyValueLoadingMetadataItem : AVMetadataItem {

	AVLazyValueLoadingMetadataItemInternal* _lazyMetadataItem;

}
+(id)metadataItemWithPropertiesOfMetadataItem:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(id)dataType;
-(void)dealloc;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)value;
-(id)_initWithFigMetadataDictionary:(id)arg1 valueLoadingHandler:(/*^block*/id)arg2 ;
-(long long)_valueStatus;
-(BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1 ;
-(void)_waitForLoadingOfValueDependentKey:(id)arg1 ;
-(void)_valueRequestDidFinish;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
