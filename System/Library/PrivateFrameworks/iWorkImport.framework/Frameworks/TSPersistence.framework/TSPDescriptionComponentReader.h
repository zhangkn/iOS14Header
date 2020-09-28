/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPComponentReader.h>

@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader : TSPComponentReader {

	TSPDescriptionGenerator* _descriptionGenerator;

}
-(void)read;
-(id)initWithComponent:(id)arg1 delegate:(id)arg2 readChannel:(id)arg3 descriptionGenerator:(id)arg4 ;
-(BOOL)shouldProceedParsingOnFailure;
-(BOOL)shouldValidateComponentsOfInMemoryObjects;
-(id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const MessageInfo*)arg2 message:(unique_ptr<google::protobuf::Message, std::__1::default_delete<google::protobuf::Message> >*)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(unique_ptr<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > >, std::__1::default_delete<std::__1::unordered_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > >*)arg5 unknownContent:(id)arg6 ;
-(id)unknownObjectUnarchiverWithArchiveInfo:(const ArchiveInfo*)arg1 stream:(DispatchDataInputStream*)arg2 ignoreMessageData:(BOOL)arg3 ;
@end
