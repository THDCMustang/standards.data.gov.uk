<article id="article-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="article-inner clearfix">

    <?php print $unpublished; ?>

    <?php print render($title_prefix); ?>
    <?php if(!empty($user_picture) || $title || (!empty($submitted) && $display_submitted)): ?>
      <header class="clearfix<?php $user_picture ? print ' with-picture' : ''; ?>">

        <?php print $user_picture; ?>

        <?php if ($title): ?>
          <h1<?php print $title_attributes; ?>>
            <?php if ($page): ?>
              <?php print $title; ?>
            <?php elseif (!$page): ?>
              <a href="<?php print $node_url; ?>" rel="bookmark"><?php print $title; ?></a>
            <?php endif; ?>
          </h1>
        <?php endif; ?>

        <?php if ($display_submitted): ?>
          <div class="submitted"><?php print $submitted; ?></div>
        <?php endif; ?>

      </header>
    <?php endif; ?>
    <?php print render($title_suffix); ?>

    <div<?php print $content_attributes; ?>>
    <?php
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    </div>

    <?php if ($links = render($content['links'])): ?>
      <nav class="clearfix"><?php print $links; ?></nav>
    <?php endif; ?>

    <?php $view_output = views_embed_view('standard_versions','block', $node->nid); ?>
    <?php if (strpos($view_output, 'view-content') > 0): ?>
      <div class="embedded-view">
        <h2 class="block-title">Standard versions</h2>
        <?php print $view_output; ?>
      </div>
    <?php endif; ?>

    <?php $view_output = views_embed_view('standard_profiles','block_1', $node->nid); ?>
    <?php if (strpos($view_output, 'view-content') > 0): ?>
      <div class="embedded-view">
        <h2 class="block-title">Standards profiles</h2>
        <?php print $view_output; ?>
      </div>
    <?php endif; ?>

    <?php $view_output = views_embed_view('standard_profiles','block_2', $node->nid); ?>
    <?php if (strpos($view_output, 'view-content') > 0): ?>
      <div class="embedded-view">
        <h2 class="block-title">Proposals</h2>
        <?php print $view_output; ?>
      </div>
    <?php endif; ?>


    <?php print render($content['comments']); ?>

  </div>
</article>
