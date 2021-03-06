/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactWithNamePredicate : CNPredicate <CNSuggestedContactPredicate> {
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)sgContactMatchesWithSortOrder:(int)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4;

@end
