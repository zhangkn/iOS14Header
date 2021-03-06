/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPArchiver.h>
#import <TSPersistence/TSPProxyObjectMappingProvider.h>

@protocol TSPProxyObjectMapping;
@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider> {

	id<TSPProxyObjectMapping> _proxyObjectMapping;

}

@property (nonatomic,readonly) long long targetType; 
@property (assign,nonatomic,__weak) id<TSPProxyObjectMapping> proxyObjectMapping;              //@synthesize proxyObjectMapping=_proxyObjectMapping - In the implementation block
-(long long)targetType;
-(void)setStrongReference:(id)arg1 message:(Reference*)arg2 ;
-(void)setStrongLazyReference:(id)arg1 message:(Reference*)arg2 ;
-(id<TSPProxyObjectMapping>)proxyObjectMapping;
-(void)setProxyObjectMapping:(id<TSPProxyObjectMapping>)arg1 ;
@end

