# Reverse Level Order Traversal
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given a binary tree of size N, find its reverse level order traversal. ie- the traversal must begin from the last level. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
        1
      /   \
     3     2</span>

<span style="font-size:18px"><strong>Output:</strong> 3 2 1
<strong>Explanation:</strong>
Traversing level 1 : 3 2
Traversing level 0 : 1</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
       10
      /  \
     20   30
    / \ 
   40  60</span>

<span style="font-size:18px"><strong>Output: </strong>40 60 20 30 10
<strong>Explanation:</strong>
Traversing level 2 : 40 60
Traversing level 1 : 20 30
Traversing level 0 : 10</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp; </strong><br>
You dont need to read input or print anything. Complete the function <strong>reverseLevelOrder() </strong>which takes the root of the tree as input parameter and returns a list containing the reverse level order traversal of the given tree.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space: </strong>O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10^4</span></p>
 <p></p>
            </div>