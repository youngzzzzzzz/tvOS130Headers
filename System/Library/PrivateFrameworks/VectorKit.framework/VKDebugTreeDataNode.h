/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKDebugTreeNode.h>

@interface VKDebugTreeDataNode : VKDebugTreeNode {

	const DebugTreeNode* _node;

}
-(id)name;
-(BOOL)isExpandable;
-(id)propertyColumn;
-(id)valueColumn;
-(id)tagsColumn;
-(void)searchNodes:(id)arg1 withParameter:(id)arg2 ;
-(id)initWithDebugTreeNode:(const DebugTreeNode*)arg1 withParent:(id)arg2 ;
-(void)buildChildren;
-(long long)propertyCount;
@end
