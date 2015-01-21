# cmm-social-feed
Provides a drupal social feed to post content to social networks.

This code is featured in our company blog here: http://cheekymonkeymedia.ca/blog/drupal-planet/how-automatically-send-your-blog-posts-social-networks

-- REQUIREMENTS --

This module requires the Taxonomy module:

This module requires the Views module:
  http://drupal.org/project/views 

This module requires the Views module:
  http://drupal.org/project/features 

-- INSTALLATION --

1) Enable featues and required modules.
2) Enable the feature at /admin/structure/features

-- CONFIGURATION --

- Add a few social network terms to the new vocabulary called "Social Networks". /admin/structure/taxonomy/cmm_social_feed_networks/add
- This module adds a term reference field to the "Article" content type. If you want to use this on other content types, you need to add this field to the content type of your choice.
- You will probably want to make sure that the "Post To Social Networks" field is hidden on the manage display page /admin/structure/types/manage/article/display
- You can customize the view at /admin/structure/views/view/cmm_social_feed/edit
- You will need a way to post the RSS Feed to social networks. I suggest the following third party providers.

Hootsuite: 
  https://hootsuite.com/

IF This Then That: 
  https://ifttt.com

Buffer: 
  https://bufferapp.com/