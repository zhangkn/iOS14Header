/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRINamespaceDescriptorProviding.h>

@class TRINamespaceDatabase, NSString;

@interface TRINamespaceDescriptorProvider : NSObject <TRINamespaceDescriptorProviding> {

	TRINamespaceDatabase* _namespaceDatabase;
	NSString* _descriptorDirectory;

}
+(id)providerWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2 ;
+(id)_descriptorFromDynamicNamespaceRecord:(id)arg1 ;
-(id)descriptorWithNamespaceName:(id)arg1 ;
-(id)initWithNamespaceDatabase:(id)arg1 defaultDescriptorDirectoryPath:(id)arg2 ;
-(id)_dynamicDescriptorsForContainer:(int)arg1 teamId:(id)arg2 ;
@end
